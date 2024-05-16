import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.feature_extraction.text import CountVectorizer

class TextAnalysisCommand:
    def execute(self, data):
        pass
    
class FeatureExtractionCommand(TextAnalysisCommand):
    def execute(self, data):
        print("Feature extraction command")
        vectorizer = CountVectorizer()
        X = vectorizer.fit_transform(data['text'])
        return X

class ModelTrainingCommand(TextAnalysisCommand):
    def execute(self, X, y):
        print("Model training command")
        model = LinearRegression()
        model.fit(X, y)
        return model

class TextAnalysisPipeline:
    def __init__(self):
        self.commands = []

    def add_command(self, command):
        self.commands.append(command)

    def execute_pipeline(self, data):
        X = None
        y = None

        for command in self.commands:
            if isinstance(command, FeatureExtractionCommand):
                X = command.execute(data)
            elif isinstance(command, ModelTrainingCommand):
                y = data['target']  
                model = command.execute(X, y)
                return model  
            else:
                data = command.execute(data)

        return data

data = {'text': ['This is a simple example text for text analysis.', 'Another example for analysis.'],
        'target': [20, 15]}
df = pd.DataFrame(data)

pipeline = TextAnalysisPipeline()
pipeline.add_command(FeatureExtractionCommand())
pipeline.add_command(ModelTrainingCommand())

trained_model = pipeline.execute_pipeline(df)

print(trained_model)