// Object: DOTGiverComponentData
// ClassId: 1749
// RuntimeId: 10676
// TypeInfo: 0x0000000144D5D1E0
#include "../CasablancaShared/DOTGiverBaseComponentData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/SuppressionType.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DOTGiverComponentData : public CasablancaShared::DOTGiverBaseComponentData {
        Int32 DoTTickDamage; // 0xB0
        Float32 DoTSuppressionValue; // 0xB4
        DiceShooterShared::SuppressionType DoTSuppressionType; // 0xB8
        Entity::MaterialDecl MaterialPair; // 0xBC
    }; // 0xC0
    static_assert(sizeof(DOTGiverComponentData) == 0xC0);
}
#pragma pack(pop)