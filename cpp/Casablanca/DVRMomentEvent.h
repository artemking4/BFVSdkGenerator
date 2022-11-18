// Object: DVRMomentEvent
// ClassId: 1491
// RuntimeId: 11583
// TypeInfo: 0x0000000144C1D580
#include "../Core/DataContainer.h"
#include "../Casablanca/Moments.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DVRMomentEvent : public Core::DataContainer {
        Casablanca::Moments MomentType; // 0x18
        Float32 SecondsStartTime; // 0x1C
        Float32 SecondsDurationTime; // 0x20
        char pad_0x24[0x4];
        CString MomentId; // 0x28
        Boolean VariableTiming; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DVRMomentEvent) == 0x38);
}
#pragma pack(pop)