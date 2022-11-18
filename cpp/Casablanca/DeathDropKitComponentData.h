// Object: DeathDropKitComponentData
// ClassId: 1751
// RuntimeId: 60140
// TypeInfo: 0x0000000144C7D100
#include "../Entity/GameComponentData.h"
#include "../Casablanca/DroppedItemEntityData.h"
#include "../Global/Float32.h"
#include "../Casablanca/DropKitRandomRange.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DeathDropKitComponentData : public Entity::GameComponentData {
        Casablanca::DroppedItemEntityData DroppedItem; // 0x80
        Float32 MovementVelocityBlendValue; // 0x88
        Casablanca::DropKitRandomRange HitVelocity; // 0x8C
        Casablanca::DropKitRandomRange ForwardVelocity; // 0x94
        Casablanca::DropKitRandomRange UpVelocity; // 0x9C
        Casablanca::DropKitRandomRange AngularVelocity; // 0xA4
        Int32 MinRandomSpareAmmoPercent; // 0xAC
        Int32 MaxRandomSpareAmmoPercent; // 0xB0
        Int32 MinRandomClipAmmoPercent; // 0xB4
        Int32 MaxRandomClipAmmoPercent; // 0xB8
        char pad_0xBC[0x4];
    }; // 0xC0
    static_assert(sizeof(DeathDropKitComponentData) == 0xC0);
}
#pragma pack(pop)