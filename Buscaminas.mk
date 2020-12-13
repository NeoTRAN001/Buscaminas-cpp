##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Buscaminas
ConfigurationName      :=Debug
WorkspacePath          :=/home/neo/Scripts/CPP
ProjectPath            :=/home/neo/Scripts/CPP/Buscaminas
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tran
Date                   :=12/13/20
CodeLitePath           :=/home/neo/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Buscaminas.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/config.cpp$(ObjectSuffix) $(IntermediateDirectory)/drawboard.cpp$(ObjectSuffix) $(IntermediateDirectory)/clean.cpp$(ObjectSuffix) $(IntermediateDirectory)/mineshandler.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/neo/Scripts/CPP/Buscaminas/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/config.cpp$(ObjectSuffix): config.cpp $(IntermediateDirectory)/config.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/neo/Scripts/CPP/Buscaminas/config.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/config.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/config.cpp$(DependSuffix): config.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/config.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/config.cpp$(DependSuffix) -MM config.cpp

$(IntermediateDirectory)/config.cpp$(PreprocessSuffix): config.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/config.cpp$(PreprocessSuffix) config.cpp

$(IntermediateDirectory)/drawboard.cpp$(ObjectSuffix): drawboard.cpp $(IntermediateDirectory)/drawboard.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/neo/Scripts/CPP/Buscaminas/drawboard.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/drawboard.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/drawboard.cpp$(DependSuffix): drawboard.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/drawboard.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/drawboard.cpp$(DependSuffix) -MM drawboard.cpp

$(IntermediateDirectory)/drawboard.cpp$(PreprocessSuffix): drawboard.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/drawboard.cpp$(PreprocessSuffix) drawboard.cpp

$(IntermediateDirectory)/clean.cpp$(ObjectSuffix): clean.cpp $(IntermediateDirectory)/clean.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/neo/Scripts/CPP/Buscaminas/clean.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/clean.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/clean.cpp$(DependSuffix): clean.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/clean.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/clean.cpp$(DependSuffix) -MM clean.cpp

$(IntermediateDirectory)/clean.cpp$(PreprocessSuffix): clean.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/clean.cpp$(PreprocessSuffix) clean.cpp

$(IntermediateDirectory)/mineshandler.cpp$(ObjectSuffix): mineshandler.cpp $(IntermediateDirectory)/mineshandler.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/neo/Scripts/CPP/Buscaminas/mineshandler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/mineshandler.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/mineshandler.cpp$(DependSuffix): mineshandler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/mineshandler.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/mineshandler.cpp$(DependSuffix) -MM mineshandler.cpp

$(IntermediateDirectory)/mineshandler.cpp$(PreprocessSuffix): mineshandler.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/mineshandler.cpp$(PreprocessSuffix) mineshandler.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


