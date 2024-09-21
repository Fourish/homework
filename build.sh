mkdir -p build && pushd build

cmake -G "Unix Makefiles" ..

cmake --build .

popd