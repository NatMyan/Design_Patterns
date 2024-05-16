#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <iostream>
#include <string>

class Document {
    public:
        explicit Document(const std::string& content) : content_(content) {}

        const std::string& getContent() const {
            return content_;
        }

    private:
        std::string content_;
};

#endif // DOCUMENT_HPP