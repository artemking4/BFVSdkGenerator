// Object: PoseModifier
// ClassId: 1499
// RuntimeId: 25143
// TypeInfo: 0x0000000144D4ABF0
#include "../CasablancaShared/DamageModifierBaseData.h"
#include "../Physics/CharacterPoseType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PoseModifier : public CasablancaShared::DamageModifierBaseData {
        Physics::CharacterPoseType Pose; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PoseModifier) == 0x28);
}
#pragma pack(pop)