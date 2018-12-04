#include "EXCEPTION.hpp"

EXCEPTION::EXCEPTION(const char* message):message(message){}
EXCEPTION::EXCEPTION(const EXCEPTION& e):message(e.message){}
EXCEPTION::~EXCEPTION(){}
const std::string& EXCEPTION::what()const{ return message;}