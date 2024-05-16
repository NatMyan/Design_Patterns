#ifndef TEXT_EXTRACT_HANDLER_HPP
#define TEXT_EXTRACT_HANDLER_HPP

#include "Document.hpp"
#include "DocumentHandler.hpp"

class TextExtractionHandler : public DocumentHandler {
    public:
        void processDocument(const Document& document) override {
            std::cout << "Text Extraction: " << document.getContent() << std::endl;
            if (nextHandler_) {
                nextHandler_->processDocument(document);
            }
        }

        void setNextHandler(DocumentHandler* handler) {
            nextHandler_ = handler;
        }

    private:
        DocumentHandler* nextHandler_{nullptr};
};

#endif // TEXT_EXTRACT_HANDLER_HPP