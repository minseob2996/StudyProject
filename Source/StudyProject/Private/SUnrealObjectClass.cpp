// SUnrealObjectClass.cpp


#include "SUnrealObjectClass.h"

USUnrealObjectClass::USUnrealObjectClass() //여기가 CDO라는데?
{
	Name = TEXT("USUnrealObjectClass CDO");
}

void USUnrealObjectClass::HelloUnreal()
{
	UE_LOG(LogTemp, Log, TEXT("USUnrealObjectClass::HelloUnreal() has been called."));
}
