// Object: ValueMatchEntityData
// ClassId: 3855
// RuntimeId: 5863
// TypeInfo: 0x0000000144DBE730
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../DiceCommonsShared/MatchAndTriggerItem.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class ValueMatchEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 DebugTextColor; // 0x30
        Float32 TimeScale; // 0x40
        Float32 TimeOffset; // 0x44
        Array<CString> InputValuesNames; // 0x48
        Array<DiceCommonsShared::MatchAndTriggerItem> MatchAndTriggerArray; // 0x50
        Boolean UseExternalTime; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(ValueMatchEntityData) == 0x60);
}
#pragma pack(pop)