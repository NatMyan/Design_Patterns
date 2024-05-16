#include "Document.hpp"
#include "TextExtractHandler.hpp"
#include "LanguageDetectionHandler.hpp"
#include "SummarizationHandler.hpp"

int main() {
    Document document("This is a sample document for document processing.");

    TextExtractionHandler textHandler;
    LanguageDetectionHandler languageHandler;
    SummarizationHandler summarizationHandler;

    textHandler.setNextHandler(&languageHandler);
    languageHandler.setNextHandler(&summarizationHandler);

    textHandler.processDocument(document);

    return 0;
}