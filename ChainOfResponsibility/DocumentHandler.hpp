#ifndef DOCUMENT_HANDLER_HPP
#define DOCUMENT_HANDLER_HPP

#include "Document.hpp"

class DocumentHandler {
    public:
        virtual ~DocumentHandler() = default;
        virtual void processDocument(const Document& document) = 0;
};

#endif // DOCUMENT_HANDLER_HPP