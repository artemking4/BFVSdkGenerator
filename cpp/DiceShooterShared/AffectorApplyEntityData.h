// Object: AffectorApplyEntityData
// ClassId: 2028
// RuntimeId: 32167
// TypeInfo: 0x0000000144DF3B70
#include "../Entity/EntityData.h"
#include "../DiceShooterShared/AffectorAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class AffectorApplyEntityData : public Entity::EntityData {
        DiceShooterShared::AffectorAsset Affector; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform ApplyTransform; // 0x30
        DiceShooterShared::QueryEntityResult Giver; // 0x70
        DiceShooterShared::QueryEntityResult TargetList; // 0x80
        Float32 Duration; // 0x90
        Int32 Rank; // 0x94
        Boolean IsPassive; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(AffectorApplyEntityData) == 0xA0);
}
#pragma pack(pop)