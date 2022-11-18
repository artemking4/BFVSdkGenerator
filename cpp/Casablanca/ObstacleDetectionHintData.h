// Object: ObstacleDetectionHintData
// ClassId: 2920
// RuntimeId: 45754
// TypeInfo: 0x0000000144C4F9E0
#include "../Entity/EntityData.h"
#include "../Casablanca/HintModeType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ObstacleDetectionHintData : public Entity::EntityData {
        Casablanca::HintModeType HintMode; // 0x20
        Boolean Enabled; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(ObstacleDetectionHintData) == 0x28);
}
#pragma pack(pop)