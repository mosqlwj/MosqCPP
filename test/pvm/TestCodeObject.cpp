//
// Created by lwj on 23-5-1.
//
#include "python_vm/code/BinaryFileParser.h"
#include "python_vm/runtime/Interpreter.h"
#include <string>

using namespace pvm;
int main(int argc, char* argv[]) {
    std::string py_path = "/home/lwj/workspace/MosqCPP/data/pvm/hello.pyc";
    BufferedInputStream stream(py_path.c_str());
    BinaryFileParser parser(&stream);
    auto codes = parser.Parse();
    Interpreter interpreter;
    interpreter.Run(codes);

    return 0;
}