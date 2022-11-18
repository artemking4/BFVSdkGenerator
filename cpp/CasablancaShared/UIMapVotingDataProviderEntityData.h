// Object: UIMapVotingDataProviderEntityData
// ClassId: 3730
// RuntimeId: 48239
// TypeInfo: 0x0000000144D5F4E0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMapVotingDataProviderEntityData : public Entity::EntityData {
        Int32 MapVoteIndex; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIMapVotingDataProviderEntityData) == 0x28);
}
#pragma pack(pop)