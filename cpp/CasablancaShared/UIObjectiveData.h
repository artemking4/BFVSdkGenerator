// Object: UIObjectiveData
// ClassId: 5508
// RuntimeId: 62442
// TypeInfo: 0x0000000144D88720
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/BFUIWorldIconBehavior.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIObjectiveData : public Core::DataContainer {
        CasablancaShared::BFUIWorldIconBehavior IconBehavior; // 0x18
        CString ShortName; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform WorldTransform; // 0x30
        Core::Vec3 IconWorldOffset; // 0x70
        CString LongNameSid; // 0x80
        Int32 TeamState; // 0x88
        Int32 ControlledState; // 0x8C
        Float32 CaptureProgress; // 0x90
        Float32 CaptureBalance; // 0x94
        Float32 RushCrateBlinkrate; // 0x98
        Float32 Health; // 0x9C
        Boolean PlayerInteracting; // 0xA0
        Boolean HasSquadOrder; // 0xA1
        Boolean IsLocked; // 0xA2
        Boolean IsRushCrate; // 0xA3
        Boolean RushObjectiveArmState; // 0xA4
        Boolean ForceBlink; // 0xA5
        char pad_0xA6[0xA];
    }; // 0xB0
    static_assert(sizeof(UIObjectiveData) == 0xB0);
}
#pragma pack(pop)