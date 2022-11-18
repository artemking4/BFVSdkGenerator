// Object: TimelineEDLControlEntityData
// ClassId: 3576
// RuntimeId: 15081
// TypeInfo: 0x0000000144DBB600
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../DiceCommonsShared/EDLKeyframe.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class TimelineEDLControlEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 CutBufferTime; // 0x24
        Array<DiceCommonsShared::EDLKeyframe> Keyframes; // 0x28
        Float32 Duration; // 0x30
        Boolean SwitchShotDuringBuffer; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(TimelineEDLControlEntityData) == 0x38);
}
#pragma pack(pop)