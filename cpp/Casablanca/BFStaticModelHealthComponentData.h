// Object: BFStaticModelHealthComponentData
// ClassId: 1944
// RuntimeId: 49231
// TypeInfo: 0x0000000144C7D000
#include "../GameShared/StaticModelHealthComponentData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BFStaticModelHealthComponentData : public GameShared::StaticModelHealthComponentData {
        GameShared::TeamId IgnoreDamageFromTeam; // 0x80
        Float32 AIDamageScale; // 0x84
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(BFStaticModelHealthComponentData) == 0x90);
}
#pragma pack(pop)