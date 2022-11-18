// Object: WaterWaveEntity
// ClassId: 8272
// RuntimeId: 25036
// TypeInfo: 0x0000000144F73030
#include "../Entity/Entity.h"

namespace WaterInteractSim {
    class WaterWaveEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(WaterWaveEntity) == 0x90);
}