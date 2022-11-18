// Object: AlignCharacterEntityData
// ClassId: 2043
// RuntimeId: 34904
// TypeInfo: 0x0000000144C7CA80
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Int32.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"

#pragma pack(push, 16)
namespace Casablanca {
    class AlignCharacterEntityData : public Entity::EntityData {
        Int32 EnabledValue; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
        MotionMachineShared::TransformChannelData AlignTransformChannel; // 0x70
        MotionMachineShared::BoolChannelData AlignEnabledBoolChannel; // 0x78
        MotionMachineShared::IntChannelData AlignEnabledIntChannel; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(AlignCharacterEntityData) == 0x90);
}
#pragma pack(pop)