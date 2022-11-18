// Object: AngleDamageEntityData
// ClassId: 2048
// RuntimeId: 4929
// TypeInfo: 0x0000000144D6CB30
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/DamageModifierCurve.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/HitTypeAngles.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/AngleDamageSettings.h"
#include "../CasablancaShared/VehiclePartHealthStateSettings.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class AngleDamageEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 BoundingBoxScale; // 0x30
        Core::Vec3 BoundingBoxOffset; // 0x40
        CasablancaShared::DamageModifierCurve DamageModifierCurve; // 0x50
        CasablancaShared::DamageModifierCurve DamageModifierCurveVehicle; // 0x58
        Float32 VerticalFactor; // 0x60
        Float32 ExplosionDamageModifierParts; // 0x64
        Float32 ExplosionDamageModifierVehicle; // 0x68
        char pad_0x6C[0x4];
        CasablancaShared::HitTypeAngles HitTypeAngles; // 0x70
        Float32 VehicleCollisionDamageCap; // 0x78
        Entity::MaterialDecl MaterialPair; // 0x7C
        Float32 MaxHealth; // 0x80
        Float32 RepairRateModifier; // 0x84
        Int32 ActiveOverride; // 0x88
        char pad_0x8C[0x4];
        Array<CasablancaShared::AngleDamageSettings> OverrideSettings; // 0x90
        CasablancaShared::VehiclePartHealthStateSettings HealthStateSettings; // 0x98
        Boolean Invulnerable; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(AngleDamageEntityData) == 0xB0);
}
#pragma pack(pop)