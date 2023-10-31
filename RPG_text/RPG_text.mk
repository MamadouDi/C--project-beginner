##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=RPG_text
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :="C:/Users/mamad/Workspaces/Workspace 3"
ProjectPath            :="C:/Users/mamad/Workspaces/Workspace 3/RPG_text"
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/RPG_text
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=mamad
Date                   :=29/10/2023
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/mamad/Workspaces/Workspace 3/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -O0 -gdwarf-2 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
SHELL:=cmd.exe
Objects0=$(IntermediateDirectory)/generals.cpp$(ObjectSuffix) $(IntermediateDirectory)/ennemies.cpp$(ObjectSuffix) $(IntermediateDirectory)/My_Army.cpp$(ObjectSuffix) $(IntermediateDirectory)/Alliance.cpp$(ObjectSuffix) $(IntermediateDirectory)/allies.cpp$(ObjectSuffix) $(IntermediateDirectory)/character.cpp$(ObjectSuffix) $(IntermediateDirectory)/VictoryContribution.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/ressources.cpp$(ObjectSuffix) $(IntermediateDirectory)/Battle_of_piratepole.cpp$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/generals.cpp$(ObjectSuffix): generals.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/generals.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/generals.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/generals.cpp$(PreprocessSuffix): generals.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/generals.cpp$(PreprocessSuffix) generals.cpp

$(IntermediateDirectory)/ennemies.cpp$(ObjectSuffix): ennemies.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/ennemies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ennemies.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ennemies.cpp$(PreprocessSuffix): ennemies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ennemies.cpp$(PreprocessSuffix) ennemies.cpp

$(IntermediateDirectory)/My_Army.cpp$(ObjectSuffix): My_Army.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/My_Army.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/My_Army.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/My_Army.cpp$(PreprocessSuffix): My_Army.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/My_Army.cpp$(PreprocessSuffix) My_Army.cpp

$(IntermediateDirectory)/Alliance.cpp$(ObjectSuffix): Alliance.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/Alliance.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Alliance.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Alliance.cpp$(PreprocessSuffix): Alliance.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Alliance.cpp$(PreprocessSuffix) Alliance.cpp

$(IntermediateDirectory)/allies.cpp$(ObjectSuffix): allies.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/allies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/allies.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/allies.cpp$(PreprocessSuffix): allies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/allies.cpp$(PreprocessSuffix) allies.cpp

$(IntermediateDirectory)/character.cpp$(ObjectSuffix): character.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/character.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/character.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/character.cpp$(PreprocessSuffix): character.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/character.cpp$(PreprocessSuffix) character.cpp

$(IntermediateDirectory)/VictoryContribution.cpp$(ObjectSuffix): VictoryContribution.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/VictoryContribution.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/VictoryContribution.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/VictoryContribution.cpp$(PreprocessSuffix): VictoryContribution.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/VictoryContribution.cpp$(PreprocessSuffix) VictoryContribution.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/ressources.cpp$(ObjectSuffix): ressources.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/ressources.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ressources.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ressources.cpp$(PreprocessSuffix): ressources.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ressources.cpp$(PreprocessSuffix) ressources.cpp

$(IntermediateDirectory)/Battle_of_piratepole.cpp$(ObjectSuffix): Battle_of_piratepole.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mamad/Workspaces/Workspace 3/RPG_text/Battle_of_piratepole.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Battle_of_piratepole.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Battle_of_piratepole.cpp$(PreprocessSuffix): Battle_of_piratepole.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Battle_of_piratepole.cpp$(PreprocessSuffix) Battle_of_piratepole.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


