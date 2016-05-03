all:  mapper.cpp reducer.cpp combiner.cpp
	g++ -o mapper mapper.cpp
	g++ -o reducer reducer.cpp
	g++ -o combiner combiner.cpp 
	

clean: 
	$(RM) mapper
	$(RM) reducer
	$(RM) combiner
