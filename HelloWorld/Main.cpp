#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
/// This is included because it's bad practice to rely on transitive includes 
/// because it obscures the dependencies of your code.
/// When you transitively include a file you rely on in Visual Studio, a set of
/// three dots will appear under the dependent object to notify you.
#include <debugapi.h>

void outputInstructionsOnHowToFindTheBathroom()
{
	OutputDebugString(L"Stand up from the chair.\n");
	OutputDebugString(L"Push the chair backwards.\n");
	OutputDebugString(L"Turn right.\n");
	OutputDebugString(L"Walk forward until you see a doorway.\n");
	OutputDebugString(L"Walk through the doorway.\n");
	OutputDebugString(L"Stop Walking.\n");
	OutputDebugString(L"Turn left.\n");
	OutputDebugString(L"Grab the door handle and turn the knob clockwise.\n");
	OutputDebugString(L"Continue turning until a soft click is heard.\n");
	OutputDebugString(L"With the knob turned, press your other hand against the door.\n");
	OutputDebugString(L"Maintain pressure until doorway is open enough to talk through.\n");
}

void outputInstructionOnHowToGetToTheFrontDoor()
{
	OutputDebugString(L"Step out of the bedroom.\n");
	OutputDebugString(L"Turn 90 degrees to the right.\n");
	OutputDebugString(L"Walk 10 feet forward and stop.\n");
	OutputDebugString(L"Turn 90 degrees to the right.\n");
	OutputDebugString(L"Walk down the stairs and stop.\n");
	OutputDebugString(L"Walk forward 3  feet and stop at the door.\n");
}

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	OutputDebugString(L"Hello World!\n");
	OutputDebugString(L"Here we go!\n");
	outputInstructionsOnHowToFindTheBathroom();
	outputInstructionOnHowToGetToTheFrontDoor();
	return 0;
}
