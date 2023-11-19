# UE_LLAMA
Проект на UnrealEngine5 с использованием LLM модели llama.

Инструкция по установке.

Скомпилировать файл Llama.cpp из следующего репозитория git hash: a40f2b656fab364ce0aff98dbefe9bd9c3721cc9

Команды в терминале:
`mkdir build
cd build/
cmake .. -DLLAMA_CUBLAS=ON -DLLAMA_CUDA_DMMV_X=64 -DLLAMA_CUDA_MMV_Y=2 -DLLAMA_CUDA_F16=true -DBUILD_SHARED_LIBS=ON
cd ..
cmake --build build --config Release -j --verbose`

Затем .so or .lib file скопировать в библиотеку плагина Libraries и все файлы .h в директорию Includes. На ОС Windows требуется скопировать файл из build/bin/llama.dll в Binaries/Win64.

Требования CUDA 12.2
