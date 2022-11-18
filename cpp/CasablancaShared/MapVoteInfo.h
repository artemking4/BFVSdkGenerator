// Object: MapVoteInfo
// ClassId: 4247
// RuntimeId: 7374
// TypeInfo: 0x0000000144D5F560
#include "../Core/DataContainer.h"
#include "../CasablancaShared/MapVoteData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MapVoteInfo : public Core::DataContainer {
        Array<CasablancaShared::MapVoteData> MapVoteData; // 0x18
    }; // 0x20
    static_assert(sizeof(MapVoteInfo) == 0x20);
}
#pragma pack(pop)