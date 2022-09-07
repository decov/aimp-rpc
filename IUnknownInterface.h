#pragma once

template <typename T>
  
class IUnknownInterface : public T
{
public:
    IUnknownInterface ()
        : m_cRef(0)
    {}

    virtual ~IUnknownInterface () {}

    virtual HRESULT WINAPI QueryInterface (REFIID   riid,
        LPVOID* ppvObj)
    {
        if (!ppvObj)
            return E_INVALIDARG;
        *ppvObj = NULL;
        
        if (riid == IID_IUnknown)
        {
            *ppvObj = (LPVOID)this;
            AddRef ();
            return S_OK;
        }
        
        return E_NOINTERFACE;
    }

    virtual ULONG WINAPI AddRef ()
    {
        return ++m_cRef;
    }

    virtual ULONG WINAPI Release ()
    {
        if (0 == --m_cRef)
        {
            delete this;
        }
        
        return m_cRef;
    }
    
private:
    ULONG m_cRef;
};
