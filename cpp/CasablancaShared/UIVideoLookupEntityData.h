// Object: UIVideoLookupEntityData
// ClassId: 3785
// RuntimeId: 10022
// TypeInfo: 0x0000000144D1FF70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../MovieBase/MovieTextureAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIVideoLookupEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<MovieBase::MovieTextureAsset> Videos; // 0x28
        CString VideoName; // 0x30
    }; // 0x38
    static_assert(sizeof(UIVideoLookupEntityData) == 0x38);
}
#pragma pack(pop)