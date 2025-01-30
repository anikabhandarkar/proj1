#include "StringUtils.h"

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    ssize_t strLength = str.size(); // have the whole length of the string
    
    // Adjust the start index for negative values
    if (start < 0) { 
        start += strLength; // calculate the start from the end of the string
    }
    start = std::max(ssize_t(0), std::min(start, strLength)); // limit the start index so that it is within range

    // Adjust the end index and make it less than and equal to zero for negative values
    if (end <= 0) {
        end += strLength; // calculate end from the end or set to the last character
    }
    end = std::max(ssize_t(0), std::min(end, strLength)); // end to a valid range 

    // Compute the length of slice to ensure it is a non-negative value
    ssize_t sliceLength = std::max(ssize_t(0), end - start);

    // Return specified substring
    return str.substr(start, sliceLength);
}

std::string Capitalize(const std::string &str) noexcept{
    if (str.empty()) {
        return str; // Returns string if empty
    }
    std::string result = str;
    result[0] = std::toupper(result[0]); // Capitalize the first character
    return result;
}

std::string Upper(const std::string &str) noexcept{
    std::string result = str;
    // Using the transform function allows you to change the string to make it
    // all lowercase or all uppercase.
    std::transform(result.begin(), result.end(), result.begin(),::toupper);
    return result;
}

std::string Lower(const std::string &str) noexcept{
    std::string result = str;
    // Using the transform function allows you to change the string to make it
    // all lowercase or all uppercase.
    std::transform(result.begin(), result.end(), result.begin(),::tolower);
    return result;
}

std::string LStrip(const std::string &str) noexcept{
    
    return "";
}

std::string RStrip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Strip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    
    return "";
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    // Replace code here
    return "";
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};