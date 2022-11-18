// Object: GamePhysicsComponentData
// ClassId: 1946
// RuntimeId: 26692
// TypeInfo: 0x0000000144E9FF40
#include "../Physics/PhysicsComponentData.h"
#include "../Core/Realm.h"
#include "../EffectBase/EffectParameter.h"

namespace GameplaySim {
    class GamePhysicsComponentData : public Physics::PhysicsComponentData {
        Core::Realm Realm; // 0xA0
        char pad_0xA4[0x4];
        Array<EffectBase::EffectParameter> EffectParameters; // 0xA8
    }; // 0xB0
    static_assert(sizeof(GamePhysicsComponentData) == 0xB0);
}