#ifndef SUMMARIZATION_HANDLER_HPP
#define SUMMARIZATION_HANDLER_HPP

#include "Document.hpp"
#include "DocumentHandler.hpp"

class SummarizationHandler : public DocumentHandler {
    public:
        void processDocument(const Document& document) override {
            std::cout << "Document Summarization: Summary of the document." << std::endl;
        }
};

#endif // SUMMARIZATION_HANDLER_HPP
 