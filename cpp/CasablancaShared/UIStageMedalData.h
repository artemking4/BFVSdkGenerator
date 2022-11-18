// Object: UIStageMedalData
// ClassId: 5530
// RuntimeId: 21697
// TypeInfo: 0x0000000144D5F460
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIStageMedalData : public Core::DataContainer {
        CString Name; // 0x18
        CString Description; // 0x20
        CString Icon; // 0x28
        CString Category; // 0x30
        CString AwardCode; // 0x38
        Int32 StageAwardXP; // 0x40
        Int32 MedalAwardXP; // 0x44
        Int32 CurrentStage; // 0x48
        Int32 TotalStages; // 0x4C
        Int32 CompletionValue; // 0x50
        Int32 ProgressionValue; // 0x54
        Boolean TrackingState; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(UIStageMedalData) == 0x60);
}
#pragma pack(pop)