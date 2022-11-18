// Object: LogitechLEDFadeBitmapEffectEntity
// ClassId: 7245
// RuntimeId: 46751
// TypeInfo: 0x0000000144DB1E40
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDFadeBitmapEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDFadeBitmapEffectEntity) == 0x30);
}