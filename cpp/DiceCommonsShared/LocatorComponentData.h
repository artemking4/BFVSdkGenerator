// Object: LocatorComponentData
// ClassId: 1799
// RuntimeId: 53305
// TypeInfo: 0x0000000144DBBF00
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LocatorComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(LocatorComponentData) == 0x90);
}
#pragma pack(pop)