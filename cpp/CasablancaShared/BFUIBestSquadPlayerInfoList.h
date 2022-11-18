// Object: BFUIBestSquadPlayerInfoList
// ClassId: 1198
// RuntimeId: 50966
// TypeInfo: 0x0000000144D41BD0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIBestSquadPlayerInfoObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBestSquadPlayerInfoList : public Core::DataContainer {
        Array<CasablancaShared::BFUIBestSquadPlayerInfoObject> PlayerObjects; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIBestSquadPlayerInfoList) == 0x20);
}
#pragma pack(pop)