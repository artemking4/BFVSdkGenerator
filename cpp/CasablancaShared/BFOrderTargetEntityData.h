// Object: BFOrderTargetEntityData
// ClassId: 3262
// RuntimeId: 55607
// TypeInfo: 0x0000000144D49FF0
#include "../Entity/SpatialEntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFOrderTargetEntityData : public Entity::SpatialEntityData {
        GameShared::TeamId OwnerTeam; // 0x60
        GameShared::TeamId EnabledForTeam; // 0x64
        Float32 AreaOfEffectRadius; // 0x68
        Float32 SpottingSphereRadius; // 0x6C
        Int32 Priority; // 0x70
        char pad_0x74[0x4];
        UIIncubatorShared::LocalizedStringId ShortNameStringId; // 0x78
        CString ShortName; // 0x80
        UIIncubatorShared::LocalizedStringId LongNameStringId; // 0x88
        CString LongName; // 0x90
        UIIncubatorShared::LocalizedStringId OffensiveOrderStringId; // 0x98
        CString OffensiveOrder; // 0xA0
        UIIncubatorShared::LocalizedStringId DefensiveOrderStringId; // 0xA8
        CString DefensiveOrder; // 0xB0
        Float32 OffensiveTimeOut; // 0xB8
        Float32 DefensiveTimeOut; // 0xBC
        Boolean Enabled; // 0xC0
        char pad_0xC1[0xF];
    }; // 0xD0
    static_assert(sizeof(BFOrderTargetEntityData) == 0xD0);
}
#pragma pack(pop)