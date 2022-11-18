// Object: AntRefCollection
// ClassId: 303
// RuntimeId: 7718
// TypeInfo: 0x0000000144D506D0
#include "../Core/DataContainerPolicyAsset.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AntRefCollection : public Core::DataContainerPolicyAsset {
        Array<Ant::AntRef> Collection; // 0x20
    }; // 0x28
    static_assert(sizeof(AntRefCollection) == 0x28);
}
#pragma pack(pop)