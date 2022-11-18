// Object: BFSpartaGameGroupsUpdate
// ClassId: 4688
// RuntimeId: 55965
// TypeInfo: 0x0000000144C6FAA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaGameGroupInfo.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaGameGroupsUpdate : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFSpartaGameGroupInfo> Gamegroups; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaGameGroupsUpdate) == 0x20);
}
#pragma pack(pop)