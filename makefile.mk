EDL = g++
COMP = g++
RM = rm
ECHO = @echo

RMFLAGS = -f
CPPFLAGS = -DNOMAP

INT = CollectionEntiers.h
REAL = CollectionEntiers.cpp Test.cpp
OBJ = $(REAL:.cpp=.o)

CLEAN = efface
EXE = EXE



.SILENT :
.PHONY = $(CLEAN) :

$(EXE) : $(OBJ)
	$(ECHO) Edition des liens
	$(EDL) -o $(EXE) $(OBJ)

CollectionEntiers.o : CollectionEntiers.cpp CollectionEntiers.h
	$(ECHO) "Compilation de <CollectionEntiers.cpp>"
	$(COMP) $(CPPFLAGS) -c CollectionEntiers.cpp

Test.o : Test.cpp CollectionEntiers.h
	$(ECHO) "Compilation de <Test.cpp>"
	$(COMP) $(CPPFLAGS) -c Test.cpp

$(CLEAN) :
	$(ECHO) Nettoyage du repertoire
	$(RM) $(RMFLAGS) $(EXE) $(OBJ) core
