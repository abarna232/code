a = ["Design","Formulate","Build","Invent","Create","Compose","Generate","Derive","Modify","Develop"];
b = ["Choose","Support","Relate","Determine","Defend","Judge","Grade","Compare","Contrast","Argue","Justify","Support","Convince","Select","Evaluate"];
c = ["Classify","Breakdown","Categorize","Analyze","Diagram","Illustatre","Criticize","Simplify","Associate"];
d = ["Calculate","Predict","Apply","Solve","Use","Demonstrate","Model","Perform","Present"];
e = ["Describe","Explain","Paraphrase","Restate","Give","Original","Examples of","Summarize","Contrast","Discuss","Interpret"];
f = ["List","Recite","Outline","Define","Name","Match","Quote","Recall","Identify","Label","Recognize"];
g=input();
for x in a:
    y= x in g;
    if y:
        print("Create");
for x in b:
    y= x in g;
    if y:
        print("Evaluate");
for x in c:
    y= x in g;
    if y:
        print("Analyze");
for x in d:
    y= x in g;
    if y:
        print("Apply");
for x in e:
    y= x in g;
    if y:
        print("Understand");
for x in f:
    y= x in g;
    if y:
        print("Remember");
