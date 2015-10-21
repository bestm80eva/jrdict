#ifndef __DICSTR_H
#define __DICSTR_H

struct dWord {
	QString word;
	QString read;
	QString type;
	QString trans;
};

struct dNode {
	QChar id;
	QList<dNode> childs;
	QList<dWord> words;
};

struct formitem {
	QString end;
	int remove;
	QString add;
	QString betype;
	QString type;
	QString comment;
};

struct formfind {
	QString form;
	QString type;
	QString comment;
};

struct dictfind {
	int begin;
	int len;
	QString src;
	dWord word;
	QString comment;
};

void loadDict();
void saveDict();
void loadForms();

formfind katatohira(formfind);
bool wrdCompare(dWord, dWord);

QList<dictfind> scanWords(formfind, bool);
void addWord(dWord);
void updWord(dWord, dWord);
void delWord(dWord);

QList<dictfind> scanWords(formfind,bool);
QList<formfind> getbackforms(QString, QString, int, QString);

#endif
