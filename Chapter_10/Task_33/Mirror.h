#ifndef MIRROR_H
#define MIRROR_H

class Mirror
{
private:
    Mirror *m_ptrMirror;
    bool m_flag;

public:
    Mirror();
    Mirror(Mirror &ptrMirror);

    bool test() const;
};

#endif // MIRROR_H
