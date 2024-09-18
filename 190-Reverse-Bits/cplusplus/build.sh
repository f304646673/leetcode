if [ -d "build" ]; then
  rm -rf build/*
fi
mkdir -p build
g++ test/test.cpp -lgtest -lgtest_main -o build/release