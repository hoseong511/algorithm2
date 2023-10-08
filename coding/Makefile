name := a.out
CXXFLAGS = -fsanitize=address -std=c++11 -g3
src := b55.cpp
obj := $(src:%.cpp=objdir/%.o)

objdir/%.o : %.cpp
	mkdir -p objdir
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(name) : $(obj)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	$(RM) $(obj) $(name)
	rmdir objdir
