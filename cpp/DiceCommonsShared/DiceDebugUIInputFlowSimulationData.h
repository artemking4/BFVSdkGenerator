// Object: DiceDebugUIInputFlowSimulationData
// ClassId: 2622
// RuntimeId: 25653
// TypeInfo: 0x0000000144DBB080
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../DiceCommonsShared/DiceUIInputFlowAction.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceDebugUIInputFlowSimulationData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Title; // 0x28
        Int32 Player; // 0x30
        char pad_0x34[0x4];
        Array<DiceCommonsShared::DiceUIInputFlowAction> Actions; // 0x38
        Boolean ForceGamePadOnWindows; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(DiceDebugUIInputFlowSimulationData) == 0x48);
}
#pragma pack(pop)