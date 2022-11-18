// Object: JammingComponentData
// ClassId: 1791
// RuntimeId: 36138
// TypeInfo: 0x0000000144C7EA80
#include "../Entity/GameComponentData.h"
#include "../Casablanca/SmokeJammingData.h"
#include "../Casablanca/AirMissileJammingData.h"

#pragma pack(push, 16)
namespace Casablanca {
    class JammingComponentData : public Entity::GameComponentData {
        Casablanca::SmokeJammingData SmokeJamming; // 0x80
        Casablanca::AirMissileJammingData AirMissileJamming; // 0x94
        char pad_0xC4[0xC];
    }; // 0xD0
    static_assert(sizeof(JammingComponentData) == 0xD0);
}
#pragma pack(pop)