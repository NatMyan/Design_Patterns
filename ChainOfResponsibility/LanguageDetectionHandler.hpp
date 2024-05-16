#ifndef LANGUAGE_DETECTION_HANDLER_HPP
#define LANGUAGE_DETECTION_HANDLER_HPP

#include "Document.hpp"
#include "DocumentHandler.hpp"

class LanguageDetectionHandler : public DocumentHandler {
    public:
        void processDocument(const Document& document) override {
            std::cout << "Language Detection: English" << std::endl;
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

#endif // LANGUAGE_DETECTION_HANDLER_HPP