// Object: BFUIRosterSpecializationTree
// ClassId: 1241
// RuntimeId: 201
// TypeInfo: 0x0000000144D50CD0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/SpecializationTreeAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIRosterSpecializationTree : public Core::DataContainer {
        Array<Uint32> SelectedUnlockIdentifiers; // 0x18
        CasablancaShared::SpecializationTreeAsset SpecializationTree; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIRosterSpecializationTree) == 0x28);
}
#pragma pack(pop)