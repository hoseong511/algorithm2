ifdef OUT
	NAME= $(basename $(OUT)).out
	SRC= $(OUT)
	OBJ= $(patsubst %.o, $(OBJDIR)/%.o, $(SRC:%.cpp=%.o))
endif
CXXFLAGS= -Wall -Werror -Wextra -g3 -fsanitize=address -std=c++11
OBJDIR= obj

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I.

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	$(RM) -r $(OBJDIR) *.out
