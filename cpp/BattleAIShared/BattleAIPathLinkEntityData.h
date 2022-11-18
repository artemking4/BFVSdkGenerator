// Object: BattleAIPathLinkEntityData
// ClassId: 3265
// RuntimeId: 10336
// TypeInfo: 0x0000000144C19230
#include "../Entity/SpatialEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AIPathLinkDirection.h"
#include "../BattleAIShared/AIPathLinkData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class BattleAIPathLinkEntityData : public Entity::SpatialEntityData {
        Array<Core::Vec3> Points; // 0x60
        BattleAIShared::AIPathLinkDirection Direction; // 0x68
        char pad_0x6C[0x4];
        BattleAIShared::AIPathLinkData LinkData; // 0x70
        Boolean EnableOnInit; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(BattleAIPathLinkEntityData) == 0x80);
}
#pragma pack(pop)