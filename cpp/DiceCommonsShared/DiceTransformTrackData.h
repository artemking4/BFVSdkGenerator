// Object: DiceTransformTrackData
// ClassId: 4041
// RuntimeId: 56832
// TypeInfo: 0x0000000144DBB700
#include "../Timeline/PropertyTrackBaseData.h"
#include "../DiceCommonsShared/DiceTransformKeyframe.h"
#include "../DiceCommonsShared/DiceTransformTrackBlendMode.h"
#include "../Entity/GameObjectData.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceTransformTrackData : public Timeline::PropertyTrackBaseData {
        Array<DiceCommonsShared::DiceTransformKeyframe> Keyframes; // 0x40
        DiceCommonsShared::DiceTransformTrackBlendMode BlendMode; // 0x48
        char pad_0x4C[0x4];
        Entity::GameObjectData TimelineEntityOwner; // 0x50
    }; // 0x58
    static_assert(sizeof(DiceTransformTrackData) == 0x58);
}
#pragma pack(pop)