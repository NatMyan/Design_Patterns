import spacy
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split

class TextAnalysisCommand:
    def execute(self, data):
        raise NotImplementedError

class TextPreprocessingCommand(TextAnalysisCommand):
    def execute(self, data):
        print("Executing Text Preprocessing Command...")
        nlp = spacy.load("en_core_web_sm")
        processed_data = []
        for text in data:
            doc = nlp(text)
            meaningful_tokens = [token.text.lower() for token in doc if not token.is_punct and not token.is_space and not token.is_stop and len(token.text) > 2]
            if meaningful_tokens:
                processed_text = " ".join(meaningful_tokens)
                processed_data.append(processed_text)
        return processed_data

class ModelTrainingCommand(TextAnalysisCommand):
    def execute(self, data):
        print("Executing Model Training Command...")
        targets = [len(sentence) for sentence in data]

        X_train, X_test, y_train, y_test = train_test_split(data, targets, test_size=0.2, random_state=42)

        # Create an instance of TfidfVectorizer with adjusted min_df and max_df values
        vectorizer = TfidfVectorizer(min_df=10, max_df=0.9)  # Adjust min_df and max_df as needed

        # Ensure X_train is a list of strings
        X_train = [str(text) for text in X_train]

        # Fit the vectorizer on the training data and transform it
        X_train_processed = vectorizer.fit_transform(X_train).toarray()

        model = LinearRegression()
        model.fit(X_train_processed, y_train)

        # Ensure X_test is a list of strings
        X_test = [str(text) for text in X_test]

        # Transform the test data using the fitted vectorizer
        X_test_processed = vectorizer.transform(X_test).toarray()
        predictions = model.predict(X_test_processed)

        mse = mean_squared_error(y_test, predictions)
        print(f"Mean Squared Error: {mse}")

        return model


class TextAnalysisPipeline:
    def init(self):
        self.commands = []

    def add_command(self, command):
        self.commands.append(command)

    def execute_pipeline(self, data):
        results = []
        for command in self.commands:
            data = command.execute(data)
            results.append(data)
        return results

# Sample text data
text_data = ["This is a simple example text for text analysis.", "Another example text."]

# Create instances of commands
preprocessing_command = TextPreprocessingCommand()
model_training_command = ModelTrainingCommand()

# Create a pipeline
pipeline = TextAnalysisPipeline()
pipeline.add_command(preprocessing_command)
pipeline.add_command(model_training_command)

# Execute the pipeline
pipeline_results = pipeline.execute_pipeline(text_data)

print("\nPipeline Results:")
for result in pipeline_results:
    print(result)
